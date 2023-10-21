#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)//improve
{
                                    // room for a newly encountered character
                                    // is required: nCharObj + 1 elements
    //Char *ptr = new Char[d_info.nCharObj + 1];
    if(d_info.nCharObj + 1 > CharCount::d_capacity)
    {
        Char *ptr = enlarge(CharCount::d_capacity);
        transfer(ptr, 0, idx);          // transfer d_info.ptr[0..idx] to ptr[0]
        ptr[idx] = Char{ ch, 1 };       // insert the new element
        transfer(ptr + idx + 1, idx, d_info.nCharObj);
        delete[] d_info.ptr;            // delete garbage memory
        d_info.ptr = ptr;               // point at the new Char array



    }
    else
    {
        Char *ptr = d_info.ptr;
        transfer(ptr + idx + 1, idx, d_info.nCharObj, 1); //move all by 1
        ptr[idx] = Char{ ch, 1 };       // insert the new element
        d_info.ptr = ptr;               // point at the new Char array

    }



                                    // transfer the rest


    ++d_info.nCharObj;              // added new element
}