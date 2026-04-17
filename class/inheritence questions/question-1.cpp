#include<iostream>
using namespace std;
class Song{
    string title;
    string artist;
    int duration;
    public:
    void inputSong(){
        cout<<"Enter title:";
        cin>>title;
        
        cout<<"Enter artist: ";
        cin.ignore();
        cin>>artist;

        cout<<"Enter duration: ";
        cin>>duration;
    }
    void displaySong(){
        cout<<"Title:"<<title<<endl<<"Artist:"<<artist<<endl<<"Duration:"<<duration<<endl;
    }
};
class DownloadedSong: public Song{
    int fileSize;
    string storagePath;
    public:
    void checkCompression(){
        if(fileSize>100){
            cout<<endl<<"Large File: Consider compressing"<<endl;
        }

    }
    void inputDownloadedSong(){
        inputSong();
        cout<<"Enter fileSize: ";
        cin>>fileSize;
        cin.ignore();
        cout<<"Enter storagePath: ";
        cin>>storagePath;
    }
    void displayDownloadedSong(){
        displaySong();
        cout<<"fileSize:"<<fileSize<<endl<<"storagePath:"<<storagePath<<endl;
    }
};
int main(){
    DownloadedSong a;
    a.inputDownloadedSong();
    a.displayDownloadedSong();
    DownloadedSong b;
    b.inputDownloadedSong();
    b.displayDownloadedSong();
    DownloadedSong c[3];
    for(int i=0; i<3; i++){
        c[i].inputDownloadedSong();
    }
    cout<<endl<<"Song details:"<<endl;
    for(int i=0; i<3; i++){
        c[i].displayDownloadedSong();
    }
    return 0;
}