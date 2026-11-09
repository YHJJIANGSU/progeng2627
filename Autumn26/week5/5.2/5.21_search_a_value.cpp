#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin)
{
    if(vin.size()==0)
    {
        return -1;
    }
    for(int i=0;i<vin.size();i++)
    {
        if (n==vin[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    std::vector<int> v;
    std::vector<int> t1 = {};
    std::cout << "Test1: search 5 in empty vector, expected -1, got: " << search_vector(5, t1) << "\n";
    std::vector<int> t2 = {7};
    std::cout << "Test2: search 7 in {7}, expected 0, got: " << search_vector(7, t2) << "\n";
    std::vector<int> t3 = {10,20,30,40};
    std::cout << "Test3: search 30 in {10,20,30,40}, expected 2, got: " << search_vector(30, t3) << "\n";
    std::vector<int> t4 = {2,4,6,8};
    std::cout << "Test4: search 8 in {2,4,6,8}, expected 3, got: " << search_vector(8, t4) << "\n";
    std::vector<int> t5 = {5, 9, 5, 1};
    std::cout << "Test5: search 5 in {5,9,5,1}, expected 0, got: " << search_vector(5, t5) << "\n";
    std::vector<int> t6 = {1,2,3,4};
    std::cout << "Test6: search 9 in {1,2,3,4}, expected -1, got: " << search_vector(9, t6) << "\n";
    return 0;
}