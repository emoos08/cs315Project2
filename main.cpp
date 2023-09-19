#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{


    std::cout << "Enter a list: ";
    list p = read_list();
    list q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
   // write_list(p);
   /* std::cout << "The number of nodes at the top level of the input list is: "
        << numNodesAtTheTopLevel(p) << std::endl;
*/

  // std::cout << (is_lat(p) ? "The list is a list of atoms.\n" : "The list is not a list of atoms.\n");


   //std::cout << (member(p, q) ? "The atom is in the list.\n" : "The atom is not in the list.\n");

   /* std::cout << "last results: ";
    write_list (last(p));
    */

   /*
   std::cout << "the list pair is: ";
   write_list(list_pair(p, p));
   std::cout << "\n";
*/

   /*
   std::cout << "the firsts of the list are: ";
   write_list(firsts(p));
   std::cout << "\n";

*/

/*
   std::cout << "the flat of the list is: ";
    write_list(flat(p));
    std::cout << "\n";
*/

   std::cout << "the two lists are " << (two_the_same(p, q) ? "the same.\n" : "not the same.\n");

   //std::cout<< "the lists are " << (equal(p, q) ? "equal.\n" : "not equal.\n");
/*
   std::cout<< "the total reverse of the list is: ";
    write_list(total_reverse(p));
    std::cout << "\n";
*/
/*
 std::cout << "the shape of the list is: ";
    write_list(shape(p));
    std::cout << "\n";

*/
/*std::cout<< "the intersection of the lists is: ";
    write_list(intersection(p, q));
    std::cout << "\n";
*/
/*
std::cout<< "the union of the lists is: ";
    write_list(list_union(p, q));
    std::cout << "\n";
*/
   return 0;
}
