/*create a prg with task ID and task name using switch case create class update class and delete class*/
#include <iostream>
using namespace std;
class Task 
{
    public:
    int taskID;
    string taskName;

    void createTask() 
    {
        cout << "Enter Task ID: ";
        cin >> taskID;
        cin.ignore(); 
        cout << "Enter Task Name: ";
        getline(cin, taskName);
        cout << "Task created successfully!" << endl;
    }

    void updateTask() 
    {
        cout << "Updating Task ID: " << taskID << endl;
        cout << "Enter new Task Name: ";
        getline(cin, taskName);
        cout << "Task updated successfully!" << endl;
    }

    void deleteTask() 
    {
        taskID = 0;
        taskName = "";
        cout << "Task deleted successfully!" << endl;
    }
};
int main() 
{
    Task task;
    int choice;

    do {
        cout << "\nTask Management Menu:\n";
        cout << "1. Create Task\n";
        cout << "2. Update Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) 
        {
            case 1:
                task.createTask();
                break;
            case 2:
                if (task.taskID != 0) 
                {
                    task.updateTask();
                }
                 else 
                {
                    cout << "No task to update. Please create a task first." << endl;
                }
                break;
            case 3:
                if (task.taskID != 0) 
                {
                    task.deleteTask();
                }
                 else 
                {
                    cout << "No task to delete." << endl;
                }
                break;
            case 4:
                cout << "Exiting" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

