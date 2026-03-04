#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {

    std::vector<string> tasks;
    int choice;

    while (true) {
        cout << "\n1. Add task" << endl;
        cout << "2. Show tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose: ";
        cin >> choice;


    switch (choice) {
            case 1:
            {
                string task;
                cout << "Enter Task: ";
                cin >> task;
                tasks.push_back(task);
                break;
            }

            case 2:
            {
                cout << "Tasks: " << endl;
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                break;
            }

            case 3:
            {
                int taskNum;
                cout << "Enter the task number for deletion: ";
                cin >> taskNum;
                if (taskNum > 0 && taskNum <= tasks.size()) {
                    tasks.erase(tasks.begin() + taskNum - 1);
                    cout << "Task deleted" << endl;
                } else {
                    cout << "Invalid task number" << endl;
                }
                break;
            }   

            case 4:
            {
                cout << "Exiting..." << endl;
                return 0;
                break;
            }
        }  

    } 

    return 0;
}