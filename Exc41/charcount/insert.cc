#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)//improve
{
                                    // room for a newly encountered character
                                    // is required: nCharObj + 1 elements
    //Char *ptr = new Char[d_info.nCharObj + 1];
    cout << "In insert() d_info.nCharObj = " << d_info.nCharObj;
    cout << " d_capacity = " << d_capacity << '\n';
    if(d_info.nCharObj + 1 >= d_capacity)
    {
        Char *ptr = enlarge();
        transfer(ptr, 0, idx);          // transfer d_info.ptr[0..idx] to ptr[0]
        ptr[idx] = Char{ ch, 1 };       // insert the new element
        transfer(ptr + idx + 1, idx, d_info.nCharObj);
        destroy();            // delete garbage memory
        d_info.ptr = ptr;               // point at the new Char array



    }
    else
    {
        
        transferWithin(idx, d_info.nCharObj); //move all by 1
        d_info.ptr[idx] = Char{ ch, 1 };       // insert the new element
                     // point at the new Char array

    }
    cout << "After inserting: d_info.ptr[" << idx << "] = " << d_info.ptr[idx].ch << "\n\n";




                                    // transfer the rest


    ++d_info.nCharObj;              // added new element
}