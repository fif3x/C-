1st Program ~ Hello World!

To start, we need to add the header file in the code file with

| #include "C$.h" |

later, we will add 2 "using namespace" statements to make our program more simpler

| using namespace c$;
  using namespace cdlr; |

Now, it's time to start the main function. To do this, we need to add

| $ main(){
  
  } |
  
that's because $ means int
  
Now, print the Hello, World! text

| strout("Hello, World!"); |

to also insert a new line, we add a

| nl(1); |

to insert 1 new line

Let's now add a console title too!

| title("Example Title"); |

But, if we run the file it will close really fast. So now, we add

| wait(); |

and in the end, we add

| success(); |

if the steps are done correctly, the whole code should because

| #include "C$.h"

  using namespace c$;
  using namespace cdlr;
  
  $ main(){
      strout("Hello, World!"); nl(1);
	  title("Example Title");
	  
	  wait();
	  
	  success();
	} |