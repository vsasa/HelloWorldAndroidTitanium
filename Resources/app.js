// this sets the background color of the master UIView (when there are no windows/tab groups on it)
Titanium.UI.setBackgroundColor('#000');

// create tab group
var tabGroup = Titanium.UI.createTabGroup();
//
// create base UI tab and root window
//
var win1 = Titanium.UI.createWindow({  
    title:'Opcija 1',
    backgroundColor:'#fff'
});

var tab1 = Titanium.UI.createTab({  
    icon:'KS_nav_views.png',
    title:'opcija 1',
    window:win1
});

var label1 = Titanium.UI.createLabel({
	color:'#999',
	text:'meni : opcija 1',
	font:{fontSize:20,fontFamily:'Helvetica Neue'},
	textAlign:'center',
	bottom:'auto',
	width:'auto'
});

var btn1 = Titanium.UI.createButton({
	title:'opcija 2',
	color:'#fff',
    width:200,
    height:50,
    left:20
});

btn1.addEventListener('click',function(e)
{
    tabGroup.setActiveTab(tab2);
});

win1.add(label1);
win1.add(btn1);

//
// create controls tab and root window
//
var win2 = Titanium.UI.createWindow({  
    title:'Opcija 2',
    backgroundColor:'#fff'
});
var tab2 = Titanium.UI.createTab({  
    icon:'KS_nav_ui.png',
    title:'opcija 2',
    window:win2
});

var label2 = Titanium.UI.createLabel({
	color:'#999',
	text:'meni : opcija 2',
	font:{fontSize:20,fontFamily:'Helvetica Neue'},
	textAlign:'center',
	bottom:'auto',
	width:'auto'
});

var btn2 = Titanium.UI.createButton({
	title:'povratak',
	color:'#fff',
    width:200,
    height:50,
    top:30,
    left:20
});

var btn3 = Titanium.UI.createButton({
	title:'dupli klik info',
	color:'#fff',
    width:250,
    height:50,
    top:100,
    left:20
});


btn2.addEventListener('click',function(e)
{
    tabGroup.setActiveTab(tab1);
});

btn3.addEventListener('dblclick',function(e)
{
	for (var i=5; i > 0; i--) {
	    alert('dupli klik emulacija: ' + i.toString() );	
	};
	
});


win2.add(label2);
win2.add(btn2);
win2.add(btn3);


//
//  add tabs
//
tabGroup.addTab(tab1);  
tabGroup.addTab(tab2);  


// open tab group
tabGroup.open();
