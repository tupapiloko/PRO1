#include <iostream> 
#include <vector> 

int first_occurrence(double x, const std::vector<double>& v) {
    unsigned int pos, mid, left = 0, right = v.size();
    
    mid = v.size() / 2; 
    
    while(mid >= 0 and mid < v.size()) {
        if(v[mid] == x) return int(mid); 
        else{
            if(v[mid] > x) {
                right = mid;  
                mid /= 2; 
            }
            else {
                mid = (right + mid) / 2; 
            }
        }
    }
    return -1; 
    
}

int main() {
    int n; 
    
    std::cin >> n; 
    
    std::vector<double> v(n); 
    
    for(int i = 0; i < n; i++) {
        std::cin >> v[i]; 
    }
    double x;
    std::cin >> x; 
    std::cout << first_occurrence(x, v) << std::endl; 
}

