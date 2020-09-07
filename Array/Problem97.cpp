/*
    Sorting Employees.
    Problem is taken from GFG.
    Problem Statement - https://practice.geeksforgeeks.org/problems/sorting-employees/0
    Difficulty - Basic
*/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Employee
{
    public:
        string name;
        int salary;
};

bool compareEmployee(Employee a, Employee b)
{
    if(a.salary < b.salary)
        return true;

    else if(a.salary == b.salary)
    {
        return a.name < b.name;
    }

    return false;
    
}

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase-- != 0)
    {
        int n;
        cin>>n;

        Employee *array = new Employee[n];
        for(int i = 0; i < n; i++)
        {
            cin>>array[i].name>>array[i].salary;
        }

        sort(array, array + n, compareEmployee);

        for(int i = 0; i < n; i++)
        {
            cout<<array[i].name<<" "<<array[i].salary<<" ";
        }

        cout<<endl;
    }

    return 0; 
}