/************************************************************************
// SOLUTION HERE
************************************************************************/

string timeConversion(string s) {
    if(s[8] == 'A'){
        string hh = s.substr(0,2);
        if(stoi(hh) == 12){ 
            s[0] = '0';
            s[1] = '0';
        }         
    }
    else{
        string hh = s.substr(0,2);
        if(stoi(hh) != 12){ 
            int ch = 12 + stoi(hh);
            hh = to_string(ch);
            s[0] = hh[0];
            s[1] = hh[1];
        }               
    }
    return s.substr(0,8);
}