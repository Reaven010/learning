use("ecommerce");
// db.products.find({name:"Wireless Mouse"},{price:1,_id:0});

//set value

// db.products.updateOne(
//     {name:"Wireless Mouse"},
//     {$set :{price:899}}
// );


//increment

// db.products.updateMany(
//     {category:"Electronics"},
//     {$inc :{price:100}}
// );

//PUSHING IN ARRAY 

db.products.updateOne(
    {category:"Electronics"},
    {$push:{tags:"Mouse"}}
);