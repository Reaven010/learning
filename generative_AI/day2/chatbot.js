import { GoogleGenAI } from "@google/genai";
import readlinesync from 'readline-sync';


// The client gets the API key from the environment variable `GEMINI_API_KEY`.
const ai = new GoogleGenAI({apiKey: "AIzaSyATGvausBfP6GC1roWITYs8BJFF7NxwtD0"});
const history=[]


async function chatting(userproblem) {

  history.push({
    role:'user',
    parts:[{text:userproblem}]
  })

  const response = await ai.models.generateContent({
    model: "gemini-2.5-flash",
    contents:history
  });
    
  history.push({
    role:'model',
    parts:[{text:response.text}]
  })
  
  console.log(response.text);

}

async function main(){
  const userproblem=readlinesync.question("ask me anything ----->")
  await chatting(userproblem);
  main();
}

main();