/*                                                                             HTML Generator
                                      HTML GENERATOR
                                             
   This module converts structed stream into stream.  That is, given a stream to write to,
   it will give you a structured stream to
   
 */

#ifndef HTMLGEN_H
#define HTMLGEN_H

#include "HTML.h"
#include "HTStream.h"

/* Special Creation: */
extern HTStructured * HTMLGenerator PARAMS((HTStream * output));

#ifndef pyramid
extern HTConverter HTPlainToHTML;
#endif

#endif


/*

    */
