//Given a list of 24 hours clock time points in "HH:MM" fromat, return the minimum minutes difference 
//between any two time-points int the list

//#define char timePoints = ["23:59","00:00"];
#include <vector>
#include <iostream>
#include <string>
#include <algorithm> 
#include <limits.h>

// convert to minutest 2 push back to vector 3 sort vector  4 min diff
using namespace std;

int main(){
    vector <string> timePoints = {"23:59","00:00"};
    vector <int> time;


     
    for (int i = 0; i<timePoints.size(); i++){
        string curr = timePoints[i];

        //coverte string to integers
        int hour = stoi(curr.substr(0,2));
        int minutes = stoi(curr.substr(3,2));

        //making new time of only minutes
        int totalminutes = hour*60+minutes;
        time.push_back(totalminutes);
    }

    //sort time array
    sort(time.begin(),time.end());

    //calculate minimum diffrence 

    int mini =INT_MAX;
    int n = time.size();
    for (int i = 0; i<n-1; i++){
        int diff = time[i+1]-time[i];
        mini = min(mini,diff);

    }
    
    // this is very important "Game changer"
    int lastDiff = (time[0]+1440)-(time[n-1]);
    mini = min(mini,lastDiff);

    cout<<mini;

    return 0;
}


//Imp observations
    //make string into int using stoi
    //make a diff arry of only minutes where we compare diff and (sort to reduce complexity)
    //find min dff
    //time is a work in circle "must compare first and last minutes "