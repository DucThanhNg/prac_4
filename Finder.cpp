#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;

        size_t found = 0;

        for(size_t i = 1; i <= s2.size(); i++) {
            if(i > 1 && result[i-2] != -1){
                found = s1.find(s2.substr(0,i), result[i-2]);
            }
            else{
                found = s1.find(s2.substr(0,i));
            }

            if (found != string::npos) {
                result.push_back(found);
                found++;
            } else {
                result.push_back(-1);
                break;
            }
        }
        return result;
    }

   