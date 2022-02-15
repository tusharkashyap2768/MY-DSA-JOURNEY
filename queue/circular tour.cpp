int tour(petrolPump p[],int n)
    {
       int def = 0;
       int balance =0;
       int start =0;
       
       for(int i=0;i<n;i++)
       {
           balance = balance + p[i].petrol - p[i].distance;
           if(balance < 0)
           {
               def = def + balance;
               start = i+1;
               balance =0;
           }
       }
       if(def + balance >= 0)
       return start;
       else
       {
           return -1;
       }
    }
};
