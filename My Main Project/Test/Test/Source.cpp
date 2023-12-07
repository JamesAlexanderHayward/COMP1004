<!DOCTYPE html>
<html lang = "en">
<head>
<meta charset = "UTF-8">
<meta name = "viewport" content = "width=device-width, initial-scale=1.0">
<title>Mysterious Forest Adventure< / title>
<style>
body{
  font - family: 'Arial', sans - serif;
  margin: 20px;
}
#story{
  font - size: 18px;
  line - height: 1.5;
}
button{
  display: block;
  margin - top: 10px;
  padding: 5px 10px;
  font - size: 16px;
  cursor: pointer;
}
< / style>
< / head>
<body>

<div id = "story">
<p>Welcome to the Mysterious Forest.You find yourself at a crossroads.< / p>
< / div>

<script>
const storyElement = document.getElementById('story');

function showPassage(passage) {
    storyElement.innerHTML = `<p > ${ passage.text }< / p>`;
        for (const option of passage.options) {
            const button = document.createElement('button');
            button.textContent = option.text;
            button.addEventListener('click', () = > chooseOption(option.target));
            storyElement.appendChild(button);
        }
}

function chooseOption(target) {
    const passage = passages.find(p = > p.id == = target);
    showPassage(passage);
}

const passages = [
{
id: 'crossroads',
text : 'You find yourself at a crossroads. Do you want to go left or right?',
options : [
{ text: 'Go left', target : 'darkCave' },
{ text: 'Go right', target : 'enchantedGrove' },
] ,
},
    {
      id: 'darkCave',
      text : 'You enter a dark cave. It is very cold. Do you want to light a torch or continue in darkness?',
      options : [
        { text: 'Light a torch', target : 'treasureRoom' },
        { text: 'Continue in darkness', target : 'deadEnd' },
      ] ,
    },
    {
      id: 'enchantedGrove',
      text : 'You enter an enchanted grove with talking trees. Do you want to talk to the trees or keep walking?',
      options : [
        { text: 'Talk to the trees', target : 'friendlySpirits' },
        { text: 'Keep walking', target : 'swamp' },
      ] ,
    },
    {
      id: 'friendlySpirits',
      text : 'The trees are friendly spirits and guide you to a magical portal. Congratulations, you have completed the adventure!',
      options : [] ,
    },
    {
      id: 'swamp',
      text : 'You reach a swamp. Do you want to try to cross it or go back to the crossroads?',
      options : [
        { text: 'Cross the swamp', target : 'hiddenTemple' },
        { text: 'Go back to the crossroads', target : 'crossroads' },
      ] ,
    },
    {
      id: 'hiddenTemple',
      text : 'You discover a hidden temple in the swamp. Inside, you find ancient artifacts. Congratulations, you have completed the adventure!',
      options : [] ,
    },
    {
      id: 'treasureRoom',
      text : 'You find a room full of treasures. Congratulations, you have completed the adventure!',
      options : [] ,
    },
    {
      id: 'deadEnd',
      text : 'You reach a dead end. Unfortunately, your journey ends here. Game over.',
      options : [] ,
    },
];

showPassage(passages[0]);
< / script>

< / body>
< / html>
