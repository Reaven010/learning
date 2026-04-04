use("ecommerce");

//inserting data

// db.sales.insertMany(
//     [
//         {item:"apple",price:10,quantity:5,category:"Fruit"},
//         {item:"banana",price:5,quantity:10,category:"Fruit"},
//         {item:"carrot",price:8,quantity:6,category:"Vegetable"},
//         {item:"tomato",price:6,quantity:8,category:"Vegetable"},
//         {item:"mango",price:15,quantity:3,category:"Fruit"},
        
//     ]
// );


//aggregation pipeline -- output of one step is input of other step 

// db.sales.aggregate([
//     {stage 1},
//     {stage 2},
//     {stage 3},
//     {stage 4},
// ]);




// db.sales.aggregate([
//     {$match:{category:"Fruit"}},
//     {$project : {_id:0,item:1,quantity:1,price:1}}
// ]);
db.sales.aggregate([

    {$group:{_id:"$category",totalsales:{$sum:{$multiply:["$price","$quantity"]}}}}
]).sort({totalsales:-1});