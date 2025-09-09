import { GoogleGenAI } from "@google/genai";
import readlinesync from 'readline-sync';


// The client gets the API key from the environment variable `GEMINI_API_KEY`.
const ai = new GoogleGenAI({apiKey: "AIzaSyATGvausBfP6GC1roWITYs8BJFF7NxwtD0"});

const chat = ai.chats.create({
    model: "gemini-2.5-flash",
    history:[],
  })


async function main(){
  const userproblem=readlinesync.question("ask me anything ----->")
    const response = await chat.sendMessage({
        message:userproblem,
    });

    console.log(response.text);
    main();
}

main();