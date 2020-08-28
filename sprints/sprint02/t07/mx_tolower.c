int mx_tolower(int c) {
   c = (char) c;
   
   if ( c > 64 && c < 91 )
        return (c+=32);
   else 
       return c;
}
