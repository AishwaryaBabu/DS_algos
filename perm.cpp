#include <iostream>
#include <string>
#include <list>

/*
    PROGRAM THAT PRINTS ALL THE PERMUATIONS OF A GIVEN STRING
*/


/*!
    This function takes the character 'c', and inserts it into every position
    in the string 'word'. Each insertion generates a new permutation given by
    'newPerm' and is inserted into the list give by 'list'
*/
void InsertChar( std::string &word, std::list< std::string > &list, char c)    {

    for ( int i = 0; i < word.size(); ++i)  {
        std::string tempWord = word;
        std::string newPerm = tempWord.insert(i, 1, c);
        list.push_back(newPerm);
    }

    // Finally, append the character to the end of the string
    // C++ list algorthms will only prepend. So we have to manually
    // Append the characted to the end of the string. 
    // Annoying??? HELL YEAH!!! }:-{
    std::string tempWord = word;
    std::string newPerm = tempWord + c;
    list.push_back(newPerm);

}

/*
    Three guesses about what this function does.
*/
void PrintList(const std::list< std::string > &list ) {
    // As a sanity check, make sure this equates to N! on a string of size N
    std::cout << "Number of permutations = " << list.size() << std::endl;
    for( std::list< std::string >::const_iterator it = list.begin(); it != list.end(); ++it)    {
        std::cout << *it << std::endl;
    }
}


/*
    This is the meat and potatoes of the whole show. The alpha and omega
    and all that good shit. Basically, this makes the permuations and 
    calls the 'InsertChar' function over and over agin.
*/ 
void MakePerms( std::list< std::string > &list, std::string word)   {
    // We have to first create the base case string which consists of 
    // only the first character. 
    char baseStringChar = word[0];
    std::string baseString(&baseStringChar);

    // Now we insert the second character at every position
    // in that tiny-ass one character length base case string
    char c = word[1];
    InsertChar(baseString, list, c);

    // Now we loop this puppy up!!! :P
    int current_size = 2; // Size of the current permutations
    int N = word.size();  // Size of the permutations we want
    while( true )  {
        std::string tempString = list.front();
        current_size = tempString.size();

        // If this condition is true, that means we've 
        // started seeing permutations of size N, which 
        // is exactly what we want. So DO NOT pop them from 
        // The list. Keep them intact because that 'PrintList'
        // fellow needs to print them.
        if( current_size == N )
            break;

        list.pop_front();
        char c = word[current_size];
        
        InsertChar(tempString, list, c);

    }

}

// Small ass main functions. Which is how it should be.
int main( int argc, char *argv[])   {

    std::string lolString = "elbo";

    std::list< std::string > permList;
    
    MakePerms(permList, lolString);
    
    PrintList(permList);

}
