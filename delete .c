<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="../node_modules/bootstrap/dist/css/bootstrap.css">
    <link rel="stylesheet" href="../node_modules/bootstrap-icons/font/bootstrap-icons.css">
    <style>
        input{
            width:40px;
        }
        button{
            width:100px;
        }
    </style>
</head>
<body class="container-fluid bg-light">
    <div class="bg-white m-3">
        <div class="border border-1">
    <div class="row mt-2 m-2">
        <div class="col-3">
            <label for="">
                Amount you need
            </label>
            <input type="text" id="input1" placeholder="₹5,00,000" min="50000"  max="4000000" width="200px" style="width:100px">
        </div>

        <div class="col-3">
            <label>for</label>
                <input type="number" value="" placeholder="1" min="1"  max="5" id="input2">
                <label for="">year</label>
        </div>

        <div class="col-3">
            <label>Interest Rate</label>
                <input type="number" id="input3" min="10.85"  max=" 21"  >
                <label>%</label> 
        </div>           
    </div>   
    <div class="row mt-2 m-2">
   
        <div class="col-3">
            <input type="range" value="₹5,00,000" id="range1" class="w-50" max="4000000" min="50000" onchange="changeinput()">
            <div>
                <span class="pe-4">₹50,000</span>
                <span>₹40,00,000</span>
            </div>
        </div>

        <div class="col-3">
            
                <input type="range"  class="w-50" id="range2" min="1" max="5" onchange="changeinput()">
                <div>
                    <span class="pe-4">1Year</span>
                    <span>5Year</span>
                </div>
        </div>

        <div class="col-3">
            
                <input type="range" value="₹5,00,000" class="w-50" onchange="changeinput()" min="10.85" max="21" id="range3">
                <div>
                    <span class="pe-4">10.85%</span>
                    <span>21%</span>
                </div>
    </div>         
    </div>
    <div class="d-flex justify-content-end">
       <button class="btn btn-primary" onclick="emicalculate()">CALCULATE</button>
    </div>
</div>
   <p id="emicalculate"> </p>
</div>
<script type="text/javascript">
     var principle=0;
     var rate=0;
     var year=0;
    function changeinput(){
        let input = document.getElementById("range1");
        let  data =  document.getElementById("input1");
        data.value=input.value;
        principle = parseFloat(data.value);
         
        let input1 = document.getElementById("range2");
        let  data1 =  document.getElementById("input2");
        data1.value=input1.value;
        year = parseFloat(data1.value); 

        let input2 = document.getElementById("range3");
        let  data2 =  document.getElementById("input3");
        data2.value=input2.value;
        rate = parseFloat(data2.value);
        
    }
    function emicalculate(){
        let emi = principle * rate * (Math.pow(1 + rate, year)) / (Math.pow(1 + rate, year) - 1);
       console.log(emi);
       let  result = emi.toFixed(2);
           
          let lresult = document.getElementById("emicalculate");
          lresult.innerHTML=`the emi of your account is <h2 style="color:red">₹${result}</h2>`
    } 
</script>
</body>
</html>
