 public static void permutations(int[] boxes, int ci, int ti){
    // write your code here
    if(ci>ti){
        for(int i=0;i<boxes.length;i++){
            System.out.print(boxes[i]);
        }
        System.out.println();
        return;
    }
    
    for(int i=0;i<boxes.length;i++){
        if(boxes[i]==0){
            boxes[i]=ci;
            permutations(boxes,ci+1,ti);
            boxes[i]=0;
        }
    }
  }