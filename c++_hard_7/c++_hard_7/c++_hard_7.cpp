#include <iostream>
#include <fstream>
#include "school.pb.h"
#include<string>
#include<numeric>
using namespace std;

class IRepository {
	virtual void Open() = 0; 
	virtual void Save() = 0; 
};

class IMethods {
	virtual double GetAverageScore(const school::FullName& name) = 0;
	virtual string GetAllInfo(const school::FullName& name) = 0;
	virtual string GetAllInfo() = 0;
};


class StudentsGroup :  public IMethods, public IRepository {
protected:
	std::vector<school::Student> studentList;
public:
	void Open() override;
	void Save() override;
	double GetAverageScore(const school::FullName& name) override;
	std::string GetAllInfo(const school::FullName& name) override;
	std::string GetAllInfo() override;
	void AddStudent(const school::Student& student) {
		studentList.push_back(student);
	}
	unsigned long GetSize() {
		return studentList.size();
	}
	school::Student GetStudent(unsigned long index) {
		return studentList.at(index);
	}
};


void StudentsGroup::Open() {
	ifstream in("school.bin", ios_base::binary);
	size_t size = 0;
	while (size--) {
		school::Student st;
		st.ParseFromIstream(&in);
		studentList.push_back(std::move(st));
	}
	in.close();
}

void StudentsGroup::Save() {
	ofstream out("school.bin", ios_base::binary);

	for (auto& student : studentList) {
		student.SerializePartialToOstream(&out);
	}
	out.close();
}

double StudentsGroup::GetAverageScore(const school::FullName& name) {
	auto student = [&](const school::Student& lhs) {
		return std::tie(lhs.fullname().name(), lhs.fullname().familyname(), lhs.fullname().patronymic()) ==
			std::tie(name.name(), name.familyname(), name.patronymic());
	};
	auto iter{ std::find_if(studentList.begin(), studentList.end(), student) };
	return iter->averangeappraisals();
}

std::string StudentsGroup::GetAllInfo(const school::FullName& rhs) {
	std::string information;
	auto student = [&](const school::Student& lhs) {
		return std::tie(lhs.fullname().name(), lhs.fullname().familyname(), lhs.fullname().patronymic()) ==
			std::tie(rhs.name(), rhs.familyname(), rhs.patronymic());
	};
	auto iter = std::find_if(studentList.begin(), studentList.end(), student);
	information.append(iter->fullname().name());
	information.append((iter->fullname().IsInitialized() ? iter->fullname().patronymic() : ""));
	information.append(iter->fullname().familyname());
	information.push_back('\t');
	for (const auto& g : iter->appraisals()) {
		information.append(std::to_string(g));
		information.push_back(' ');
	}
	information.push_back('\t');
	information.append(std::to_string(iter->averangeappraisals()));
	return information;
}

std::string StudentsGroup::GetAllInfo() {
	std::string information;
	auto iter{ studentList.begin() };
	while (iter != studentList.end()) {
		information.append(GetAllInfo(iter->fullname()));
		information.push_back('\n');
		iter++;
	}
	return information;
}


void main(){
	school::FullName fn1;
	fn1.set_name("A");
	fn1.set_familyname("AA");
	fn1.set_patronymic("AAA");
	school::Student st1;
	*st1.mutable_fullname() = fn1;
	st1.add_appraisals(8);
	st1.add_appraisals(4);
	double average(0),sum(0);	
	sum = accumulate(st1.appraisals().begin(), st1.appraisals().end(), 0u);
	average = sum / st1.appraisals_size();
	cout << average << endl;
	st1.set_averangeappraisals(average);
	StudentsGroup sg;
	sg.AddStudent(st1);
	sg.Save();
	cout << sg.GetAllInfo() << endl;
	school::Student st2;
	std::string students{ sg.GetAllInfo() };
	std::cout << students << std::endl;

}






