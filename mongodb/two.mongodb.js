use ("ecommerce");
// db.products.find({"name":"Wireless Mouse"});
// db.products.find({price:{$gt: 1000}});

//or operator

// db.products.find({$or: [{category:"Electronics"},{stock : {$lte: 50}}]});

//and operation  

db.products.find({category:"Electronics",price:{$gte:100}});

//Projection

// db.products.find({},{name:1,price : 1,category:1,_id:0});

//sorting and limiting

db.products.find().sort({price:1}).skip(1);