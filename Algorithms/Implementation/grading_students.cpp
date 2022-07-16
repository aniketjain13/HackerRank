/************************************************************************
// SOLUTION HERE
************************************************************************/
vector<int> gradingStudents(vector<int> grades) {
    for(int i = 0; i < grades.size(); i++){
        if(grades[i] >= 38){
            int h = grades[i] % 5;
            if(h > 2){
                grades[i] += (5 - h);    
            }
        }
    }
    return grades;
}
