#include <iostream>
using namespace std;

class Academic {
    int math, sci, eng;
public:
    Academic(int m, int s, int e) : math(m), sci(s), eng(e) {}
    int total() const { return math + sci + eng; }
};

class Sports {
    int mark;
public:
    Sports(int m) : mark(m) {}
    int total() const { return mark; }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int m, int s, int e, int sp)
        : Academic(m, s, e), Sports(sp) {}

    void show() const {
        int total = Academic::total() + Sports::total();
        cout << "Total: " << total << "\nAverage: " << total / 4 << '\n';
    }
};

int main() {
    StudentResult student(90, 80, 70, 60);
    student.show();
}
