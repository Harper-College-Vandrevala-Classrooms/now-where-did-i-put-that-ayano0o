#include <iostream>
#include "findstring.hpp"

int main () {

 string testing = "Rumpelstiltskin";

 cout << "Find 'z' in " << testing << ": " << find(testing, 'z') << endl;
 cout << "Find 'n' in " << testing << ": " << find(testing, 'n') << endl;
 cout << "Find 'u' in " << testing << ": " << find(testing, 'u') << endl;
 cout << "Find \"skin\" in " << testing << ": " << find(testing,"skin") << endl;
 cout << "Find \"out\" in " << testing << ": " << find(testing, "out") << endl;
 cout << "Find \"kind\" in " << testing << ": " << find(testing, "kind") << endl;
    return 0;
}
