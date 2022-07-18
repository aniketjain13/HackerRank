/************************************************************************
// SOLUTION HERE
************************************************************************/

string catAndMouse(int x, int y, int z) {

    if(abs(y-z) < abs(x-z))
        return "Cat B";
    if(abs(y-z) > abs(x-z))
        return "Cat A";
    return "Mouse C";

}