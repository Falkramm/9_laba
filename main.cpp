#include <iostream>
#include <fstream>
#include <vector>
int max(int &first_element,int &second_element)
{
    if(first_element>=second_element)
        return first_element;
    else
        return second_element;
}
int find_max_el(std::vector<int> &arr,int max_element=0,int index=0)
{
    if(index==0)
        max_element=arr[0];
    if(index==arr.size())
        return max_element;
    else {
        return find_max_el(arr, max(max_element,arr[index]), index + 1);
    }
}
void set_array(std::vector<int> &arr)
{
    arr.clear();
    int element;
    while(std::cin >> element)
    {
        arr.push_back(element);
    }

}
void print_integer_element(int & element)
{
    std::cout << element;
}
void set_input()
{
    freopen("input.txt","r",stdin);
}
void set_output()
{
    freopen("output.txt","w",stdout);
}
int main() {
    set_input();
    set_output();
    std::vector<int> arr;
    set_array(arr);
    int max_element= find_max_el(arr);
    print_integer_element(max_element);
}
