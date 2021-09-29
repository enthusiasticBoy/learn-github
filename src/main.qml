import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.0
import com.mymodel.mydata 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle {
        id: rect1
        width: 400
        height: 300
        color: "#aed29c"
        anchors.centerIn: parent
        TextInput {
            id: input1
            anchors.centerIn: parent
            text: data.d1
        }
    }
    Button {
        anchors.top: rect1.bottom
        anchors.topMargin: 20
        width: 80
        height: 30
        onClicked: data.d1 = input1.text
    }
    MyData {
        id: data
        d1: "abc"
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.9}
}
##^##*/
