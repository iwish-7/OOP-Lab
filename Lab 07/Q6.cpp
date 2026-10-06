#include <iostream>
using namespace std;

class InternalExam {
public:
    void display() const {
        cout << "Internal Exam\n";
    }
};

class ExternalExam {
public:
    void display() const {
        cout << "External Exam\n";
    }
};

class FinalResult : public InternalExam, public ExternalExam {
public:
    void display() const {
        InternalExam::display();
        ExternalExam::display();
    }
};

int main() {
    FinalResult result;
    result.display();
    return 0;
}
