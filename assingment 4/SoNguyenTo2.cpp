
bool laSoNguyenTo1(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2){
        return false;
    }       
     
    for (int i = 2; i < (n - 1); i++){
        if (n % i == 0){
            return false;
        }   
    }
     
    return true;
}
