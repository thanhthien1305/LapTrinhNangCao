string pigLatin(string word)
{
    if((word[0]=='u')||(word[0]=='e')||(word[0]=='o')||(word[0]=='a')||(word[0]=='i'))
    {
        word=word+"way";
    }
    else 
    {
        word=word+word[0]+"ay";word.erase(word.begin());
        
    }
    return word;
}