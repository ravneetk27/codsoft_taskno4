#include<iostream>
using namespace std;

void printtasks(string tasks[],int count){
    cout<<"tasks to do : "<<endl;
    for(int i=0 ;i<count ;i++){
        cout<<"task "<<i<<" : "<<tasks[i]<<endl;
    }
}

int main(){
    string tasks[10]={""};
    int count = 0;
    int option = -1;
    while(option!=0){
        cout<<"TO DO LIST"<<endl;
        cout<<"1 - to add new task"<<endl;
        cout<<"2 - to view tasks"<<endl;
        cout<<"3 - delete the tasks"<<endl;
        cout<<"0 - terminate the program"<<endl;
        cin>>option;

        switch(option){
            case 1 : 
                {
                    if(count>9){
                        cout<<" task list is full"<<endl;
                    }
                    else{
                        cout<<"enter a new task : ";
                        cin.ignore();
                        getline(cin,tasks[count]);
                        count++;
                    }
                    break;
                }
            
            case 2 : 
                system("cls");
                printtasks(tasks,count);
                break;
            case 3 :
            {   
                system("cls");
                printtasks(tasks,count);
                int del = 0 ;
                cout<<"enter a task to delete : ";
                cin>>del;

                if(del<0 || del>9){
                    cout<<"you entered invalid task no."<<endl;
                    break;
                }
                for(int i=del ; i<count ; i++){
                    tasks[i]=tasks[i+1];
                }
                count = count-1;
                break;
            }
            case 0 :
                cout<<"terminating the program -------"<<endl;
                break;
            default:
                cout<<"you entered invalid value"<<endl;

        }

    }
}