#include <string>

using namespace std; 

int find(const string& str, char ch) {
   for (int i = 0; i < str.length(); ++i) {
      if (str[i] == ch) {
        return i; 
      }
   }
  return -1;   
}

int find(const string& str, string substr) {
   int strLength = str.length();
   int substrLength = substr.length();

   for (int i = 0; i <= strLength - substrLength; ++i) {
     int k;
     for (k = 0; k < substrLength; ++k) {
        if (str[i+k] !=  substr[k]) {
            break;
        }
        
     }
     if (k == substrLength) {
            return i;
     }
   }
   return -1; 
}
