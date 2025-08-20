#include <iostream>
#include <string>

using namespace std;

string grading(int score) {
    if (score >= 70) {
        return "PASS";
    }
    if (score >= 50) {
        return "RETEST";
    }

    return "FAIL";
}


int main() {
    int students_score[5];

    for (int i = 0; i < 5; i++) {
        cin >> students_score[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "번 사람의 점수는 " << students_score[i] << "점으로, " << grading(students_score[i]) << endl;
    }

    return 0;
}
