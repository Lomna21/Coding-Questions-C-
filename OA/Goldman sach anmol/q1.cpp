int func(int precedingMinutes, int alertThreshold, vector<int>& numCalls)
{
    int res =0;
    double total = 0.0;
    double precedingMinutes_ = (double)precedingMinutes;
    for(int i =0;i<precedingMinutes;i++){
     total = total + (double)numCalls[i];
 }
 
 if(total/precedingMinutes_ > alertThreshold){
     res++;
 }
 
 for(int i =precedingMinutes;i<numCalls.size();i++){
      total = total + (double)numCalls[i];
      total = total - (double)numCalls[i - precedingMinutes];
     
    if(total/precedingMinutes_ > alertThreshold){
     res++;
    }
 }