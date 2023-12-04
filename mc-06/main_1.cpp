#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Request {
    string student;
    string course;
};

bool isDuplicate(const vector<Request>& requests, const string& student, const string& course) {
    for (size_t i = 0; i < requests.size(); ++i) {
        if (requests[i].student == student && requests[i].course == course) {
            return true;
        }
    }
    return false;
}

void addRequest(vector<Request>& requests, const string& student, const string& course) {
    if (!isDuplicate(requests, student, course)) {
        Request newRequest;
        newRequest.student = student;
        newRequest.course = course;
        requests.push_back(newRequest);
    }
}

int main() {
    int n;
    cin >> n;
    vector<Request> requests;

    for (int i = 0; i < n; ++i) {
        string firstName, lastName, course;
        cin >> firstName >> lastName >> course;
        addRequest(requests, firstName + " " + lastName, course);
    }

    for (size_t i = 0; i < requests.size(); ++i) {
        for (size_t j = i + 1; j < requests.size(); ++j) {
            if (requests[i].course > requests[j].course) {
                swap(requests[i], requests[j]);
            }
        }
    }

    string currentCourse = "";
    int count = 0;
    for (size_t i = 0; i < requests.size(); ++i) {
        if (requests[i].course != currentCourse) {
            if (!currentCourse.empty()) {
                cout << currentCourse << " " << count << endl;
            }
            currentCourse = requests[i].course;
            count = 1;
        } else {
            count++;
        }
    }

    if (!currentCourse.empty()) {
        cout << currentCourse << " " << count << endl;
    }

    return 0;
}
