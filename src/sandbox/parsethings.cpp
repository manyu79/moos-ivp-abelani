
#include <iostream>
#include <vector>
#include <string>
#include "MBUtils.h"
#include "XYHazardSet.h"
#include "XYHazard.h"

using namespace std;

//----------------------------------------------------------
// Procedure: Parse a string from a slave

bool parseIncomingReport(string report)
{
  vector<string> svec;
  vector<string> repvec = parseString(report, '#');
  for (int i=2;i<repvec.size();i++){
    cout << repvec[i] << endl;
    svec = parseString(repvec[i], ',');
    for (int j=0;j<svec.size();j++){
      biteString(svec[j],'=');
    }
    XYHazard cheesesteak;
    cheesesteak.setX(strtod(svec[0].c_str(),NULL));
    cheesesteak.setX(strtod(svec[1].c_str(),NULL));
    cheesesteak.setLabel(svec[2]);
  }
  return true;
}


int main ()
{
  string report;
  XYHazardSet set;
  cout << "Input String: ";
  cin >> report;
  parseIncomingReport(report);
  //cout << "The value you entered is " << i;
  //cout << " and its double is " << i*2 << ".\n";
  return 0;
}
