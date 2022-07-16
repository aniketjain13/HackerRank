/************************************************************************
// SOLUTION HERE
************************************************************************/

string dayOfProgrammer(int year) {
    string s1 = "12.09.";
    string s2 = "13.09.";
    string s = to_string(year);
    if(year == 1918)
        return "26.09.1918";
    if(year < 1918 && year %4 == 0)
        return s1.append(s);
    if(year % 400 == 0 )
        return s1.append(s);
    if((year % 4 == 0) && (year % 100 != 0))
        return s1.append(s);
    return s2.append(s); 
}