class library
{
   public: 
	

   char *name;
   char *author;
   float price;

//Constructor
  library(char *name,  string *time, float price)
  {
     this -> name = &name;
     this -> author = &author;
     this -> price = price;
  }

  library()
  {
      this -> name = "error";   ///correct these lines
      this -> author = "Andrey Lysenkov";
      this -> price = price;
  }

  library(library *obj)
  {
      this -> name = obj -> name;
      this -> author = obj -> author;
      this -> price= obj -> price;
    }

   ~library()
   {
      delete name;
      delete author;
   }

   char *GetAuthor()
   { return &(this -> author);  }

   void SetAuthor(char *author)
   {
      this -> author = &author;
   }
   
  char *GetName()
   { return &(this -> name);  }

   void SetName(char *name)
   {
      this -> name = &name;
   }

  float Get Price()
   { return &(this -> price);  }

   void SetPrice(float price)
   {
      this -> price = &price;
   }
   


}
