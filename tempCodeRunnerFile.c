int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}