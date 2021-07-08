var pluginPath = "jseplugins"
var loader = new QUiLoader();
loader.setWorkingDirectory(loader.getWorkingDirectory() + "/jseplugins")
var pluginPath = loader.getWorkingDirectory();



function createPanelWidget()
{
	var f = new QFile(pluginPath + "/widget.ui");
	if (f.open()) {
        uiPanel = loader.load(f);

        uiPanel.CoordinateSystem.event = function(event) {
            /*
            console.log("onEvent recived " + event.typeString());
            if( event.type() === QEvent.Type.Paint ) {
                console.log("EVENT TYPE IS PAINT");
            }*/
        }

        uiPanel.CoordinateSystem.timerEvent = function(event) {
            console.log("onTimerEvent recived " + event.typeString());
        }

        uiPanel.CoordinateSystem.childEvent = function(event) {
            //console.log("onChildEvent recived " + event.typeString());
        }


        uiPanel.cmdG54.clicked.connect(this,function(param){ console.log("CLICKED G54 " + param);});
        uiPanel.cmdG55.clicked.connect(this,function(param){ console.log("CLICKED G55 " + param);});
        uiPanel.cmdG56.clicked.connect(this,function(param){ console.log("CLICKED G56 " + param);});
        uiPanel.cmdG57.clicked.connect(this,function(param){ console.log("CLICKED G57 " + param);});
        uiPanel.cmdY0.clicked.connect(this,function(param){ console.log("CLICKED cmdY0 " + param);});
        uiPanel.cmdX0.clicked.connect(this,function(param){ console.log("CLICKED cmdX0 " + param);});
        uiPanel.cmdZ0.clicked.connect(this,function(param){ console.log("CLICKED cmdZ0 " + param);});
        uiPanel.cmdAll0.clicked.connect(this,function(param){ console.log("CLICKED cmdAll0 " + param);});
        uiPanel.txtOffsetX.setValue("10");
        uiPanel.txtOffsetY.setValue("20");
        uiPanel.txtOffsetZ.setValue("30");
        uiPanel.lblOffsets.setText("offsets:");



        var layout = new QGridLayout();
        layout.addWidget(new QWidget(),0,0);
        layout.addWidget(new QWidget(),0,1);
        layout.addWidget(new QWidget(),0,2);
        layout.addWidget(new QWidget(),0,3);


        var checkBox = new QCheckBox();
        checkBox.text = "checkBox"
        checkBox.toggled.connect(this,function(param){ console.log("TOGGLED checkBox " + param);});
        layout.addWidget(checkBox);


        var timerId = 0

        var pushButton1 = new QPushButton();
        pushButton1.text = "Start Timer";
        pushButton1.clicked.connect(this,function(param){
            timerId = uiPanel.CoordinateSystem.startTimer(2000);
            console.log("START TIMER " + timerId);
        });
        layout.addWidget(pushButton1);

        var pushButton2 = new QPushButton();
        pushButton2.text = "Kill Timer";
        pushButton2.clicked.connect(this,function(param){
             uiPanel.CoordinateSystem.killTimer(timerId);
            console.log("KILL TIMER " + timerId);
        });
        layout.addWidget(pushButton2);


        var radioButton1 = new QRadioButton();
        radioButton1.text = "radio 1"
        radioButton1.toggled.connect(this,function(param){ console.log("TOGGLED radioButton1 " + param);});
        layout.addWidget(radioButton1);

        var radioButton2 = new QRadioButton();
        radioButton2.text = "radio 2"
        radioButton2.toggled.connect(this,function(param){ console.log("TOGGLED radioButton2 " + param);});
        layout.addWidget(radioButton2);

        var toolButton = new QToolButton();
        toolButton.text = "TollButton"
        toolButton.clicked.connect(this,function(param){ console.log("CLICKED toolButton " + param);});
        layout.addWidget(toolButton);


        var commandLinkButton = new QCommandLinkButton();
        commandLinkButton.text = "Command Link Button";
        commandLinkButton.clicked.connect(this,function(param){ console.log("CLICKED commandLinkButton " + param);});
        layout.addWidget(commandLinkButton);

        var dialogButtonBox = new QDialogButtonBox();
        dialogButtonBox.setStandardButtons(QDialogButtonBox.Ok|QDialogButtonBox.Cancel|QDialogButtonBox.Apply|QDialogButtonBox.Discard);
        dialogButtonBox.clicked.connect(this,function(param){
            console.log("CLICKED dialogButtonBox " + param);
            if(dialogButtonBox.standardButton(param) === QDialogButtonBox.Apply) {
                console.log("Apply BUTTON");
            }
            if(dialogButtonBox.standardButton(param) === QDialogButtonBox.Discard ) {
                console.log("Discard BUTTON");
            }
        });
        dialogButtonBox.accepted.connect(this,function(param){
            console.log("ACCEPTED dialogButtonBox " + param);
        });
        dialogButtonBox.rejected.connect(this,function(param){
            console.log("REJECTED dialogButtonBox " + param);
        });
        layout.addWidget(dialogButtonBox);

        var icon0 = new QIcon();

        icon0.addFile(pluginPath + "/images/0.png",(new QSize(10,10)).getReference());
        var comboBox0 = new QComboBox();
        comboBox0.addItem(icon0.getReference(),"TESTE 1",function() {console.log("item0 click")});
        comboBox0.addItem(icon0.getReference(),"TESTE 2",function() {console.log("item1 click")});
        layout.addWidget(comboBox0);
        comboBox0.activated.connect(this,function(index){
            comboBox0.itemData(index)();
        });

        var fontComboBox = new QFontComboBox();
        fontComboBox.currentFontChanged.connect(this,function(font){
            console.log("fontComboBox  FONT CHANGES " + font);
            dump(font);

        });
        layout.addWidget(fontComboBox);

        var lineEdit = new QLineEdit();
        lineEdit.setText("LINE EDIT HELLO WORLD !!!");
        lineEdit.editingFinished.connect(this,function() {
            console.log("lineEdit editingFinished " + lineEdit.text);
        })
        layout.addWidget(lineEdit);


        var textEdit = new QTextEdit();
        textEdit.setText("TEXT EDIT")
        textEdit.textChanged.connect(this,function() {
            console.log("textEdit textChanged " + textEdit.plainText);
        })
        layout.addWidget(textEdit);

        var plainTextEdit = new QTextEdit();
        plainTextEdit.setText("TEXT EDIT")
        plainTextEdit.textChanged.connect(this,function() {
            console.log("plainTextEdit textChanged " + plainTextEdit.plainText);
        })
        layout.addWidget(plainTextEdit);

        var spinBox = new QSpinBox();
        //spinBox.buttonSymbols = spinBox.NoButtons;
        spinBox.valueChanged.connect(this,function() {
            console.log("spinBox valueChanged " + spinBox.value);
        })
        layout.addWidget(spinBox);

        var doubleSpinBox = new QDoubleSpinBox();
        //doubleSpinBox.buttonSymbols = doubleSpinBox.NoButtons;
        doubleSpinBox.decimals = 3;
        doubleSpinBox.singleStep = 0.001;
        doubleSpinBox.value = 1;
        doubleSpinBox.valueChanged.connect(this,function() {
            console.log("doubleSpinBox valueChanged " + doubleSpinBox.value);
        })
        layout.addWidget(doubleSpinBox);


        var timeEdit = new QTimeEdit();
        timeEdit.timeChanged.connect(this,function(time) {
            console.log("timeEdit timeChanged " + time);
        })
        layout.addWidget(timeEdit);

        var dateTimeEdit = new QDateTimeEdit();
        dateTimeEdit.calendarPopup = true;
        dateTimeEdit.dateTimeChanged.connect(this,function(datetime) {
            console.log("dateTimeEdit dateTimeChanged " + datetime);
        })
        layout.addWidget(dateTimeEdit);

        var ldcnumber = new QLCDNumber();
        ldcnumber.digitCount = 3;
        ldcnumber.intValue = 0;
        layout.addWidget(ldcnumber);

        var progressBar = new QProgressBar();
        progressBar.minimum = 0;
        progressBar.maximum = 100;
        progressBar.value = 80;
        layout.addWidget(progressBar);


        var dial = new QDial();
        dial.minimum = 0;
        dial.maximum = 100;
        dial.singleStep = 1;
        dial.valueChanged.connect(this,function(value) {
            console.log("dial dateTimeChanged " + value);
            ldcnumber.intValue = value
            progressBar.value = value;
        })
        layout.addWidget(dial);

        var label = new QLabel();
        label.text = "my label";
        layout.addWidget(label);


        var hslider = new QSlider();
        hslider.orientation = QSlider.Horizontal;
        hslider.minumum = 0;
        hslider.maximum = 10;
        hslider.valueChanged.connect(this,function(value){
            console.log("horizontal slider value change " + value)
        });
        layout.addWidget(hslider);

        var vslider = new QSlider();
        vslider.orientation = QSlider.Vertical;
        vslider.minumum = 0;
        vslider.maximum = 10;
        vslider.valueChanged.connect(this,function(value){
            console.log("vertical slider value change " + value)
        });
        layout.addWidget(vslider);

        var listWidgetIcon0 = new QIcon();
        listWidgetIcon0.addFile(pluginPath + "/images/0.png", (new QSize(20,20)).getReference());
        var listWidgetItem0 = new QListWidgetItem(listWidgetIcon0.getReference(),"width icon 0");

        var listWidgetIcon1 = new QIcon();
        listWidgetIcon1.addFile(pluginPath + "/images/56.png", (new QSize(20,20)).getReference());
        var listWidgetItem1 = new QListWidgetItem(listWidgetIcon1.getReference(),"width icon 1");

        var listWidget = new QListWidget();
        listWidget.addItem("teste 1");
        listWidget.addItem("teste 2");
        listWidget.addItem("teste 3");
        listWidget.addItem(listWidgetItem0);
        listWidget.addItem(listWidgetItem1);
        var lw0 = listWidget.takeItem(0);
        var lw1 = listWidget.takeItem(3);
        listWidget.insertItem(3,lw0);
        listWidget.insertItem(0,lw1)
        listWidget.insertItem(5,"HELLO");
        layout.addWidget(listWidget);


        var tableWidget = new QTableWidget(10,3);
        var header0 = new QTableWidgetItem("Icon");
        var header1 = new QTableWidgetItem("Tool Tip");
        var header2 = new QTableWidgetItem("Script");
        tableWidget.setHorizontalHeaderItem(0,header0);
        tableWidget.setHorizontalHeaderItem(1,header1);
        tableWidget.setHorizontalHeaderItem(2,header2);

        tableWidget.itemSelectionChanged.connect(this,function(){
            var items = tableWidget.selectedItems();
            console.log(items);
        });

        tableWidget.cellDoubleClicked.connect(this,function(row,column){
             if(column === 0 ) {
                 var dir = new QDir(pluginPath + "/images/");
                 var files = dir.entryList(Array("*.png"),QDir.Files);
                 var comboBox = new QComboBox();
                 var selected = Array();
                 comboBox.addItem("");
                 for( var n = 0; n < files.length; n++ ) {
                var icon = new QIcon();
                icon.addFile(pluginPath + "/images/" + files[n], (new QSize(20,20)).getReference());
                selected[n] = Object();
                selected[n].icon = icon.getReference();
                console.log("ICON IS " + icon);
                selected[n].name = files[n]
                comboBox.addItem(selected[n].icon,selected[n].name,function() { console.log("selected file " + files[n])})
                }
                selected.splice(0,-selected.length,{icon=null,name=null});
                comboBox.activated.connect(this,function(index){
                    console.log("ITEM " + selected[index].name);
                    var item = Object();
                    if(selected[index].icon === null ) {
                        item = new QTableWidgetItem(selected[index].name);
                    } else {
                        item = new QTableWidgetItem(selected[index].icon,selected[index].name);
                    }
                    tableWidget.setCellWidget(row,column,null)
                    tableWidget.setItem(row,column,item);

                });
                tableWidget.setCellWidget(row,column,comboBox)
            }
        });

        tableWidget.cellChanged.connect(this,function(row,column){
            var item = tableWidget.item(row,column);
            console.log("cell changed " + " row:" + row + " column:" + column + " text:" + item.text + " data:" + item.data(Qt.DisplayRole));
        });

        layout.addWidget(tableWidget);


        var mainWindow = new QMainWindow(uiPanel.CoordinateSystem);
        var widget = new QWidget();
        widget.setLayout(layout);
        var scrollArea = new QScrollArea();
        scrollArea.horizontalScrollBarPolicy = Qt.ScrollBarAlwaysOn;
        scrollArea.verticalScrollBarPolicy = Qt.ScrollBarAlwaysOn;
        scrollArea.setWidget(widget);
        mainWindow.setCentralWidget(scrollArea);
        mainWindow.show();


        return uiPanel.CoordinateSystem;
	}
}


function dump(obj) {
	for (var property in obj){
		console.log(property + ': ' + obj[property]);
	}
}

/*
function onAppSettingsLoaded()
{
    var u = app.settings.units;
    var b = u ? 999 : 9999;

    uiPanel.txtOffsetX.decimals = u ? 4 : 3;
    uiPanel.txtOffsetY.decimals = u ? 4 : 3;
    uiPanel.txtOffsetZ.decimals = u ? 4 : 3;

    uiPanel.txtOffsetX.mimimum = -b;
    uiPanel.txtOffsetX.maximum = b;
    uiPanel.txtOffsetY.mimimum = -b;
    uiPanel.txtOffsetY.maximum = b;
    uiPanel.txtOffsetZ.mimimum = -b;
    uiPanel.txtOffsetZ.maximum = b;
}

function onAppDeviceStateChanged(status)
{
    uiPanel.setEnabled((status == 1) && (senderState == 4));
    
    deviceState = status;
}

function onAppSenderStateChanged(status)
{
    uiPanel.setEnabled((status == 4) && (deviceState == 1));

    senderState = status;
}

function onAppResponseReceived(command, index, response)
{
    function displayOffsets(r) {
        var gx = new RegExp(currentCS + ":([\\d\\.\\-]+),([\\d\\.\\-]+),([\\d\\.\\-]+)");
        var s = r.match(gx);
        if (s) {
            for (var i = 0; i < s.length; i++) {
                uiPanel.txtOffsetX.value = parseFloat(s[1]);
                uiPanel.txtOffsetY.value = parseFloat(s[2]);
                uiPanel.txtOffsetZ.value = parseFloat(s[3]);
            }
        }
    }

    if (command == "$G") {
        var rx = new RegExp("G5[4-9]");
        var s = response.match(rx);
        if (s) {
            uiPanel["cmd" + s[0]].checked = true;
            if (s[0] != currentCS) {
                currentCS = s[0];
                displayOffsets(currentOffsets);
            }
        }
    }

    if (command == "$#") {
        currentOffsets = response;
        displayOffsets(currentOffsets);
    }
}*/
