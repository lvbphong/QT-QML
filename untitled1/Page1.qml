import QtQuick 2.0
import QtQuick.Controls 2.5

Page {
    Button{
        id: button1
        text: 'button1'
        onClicked: {
                 myStackview.push(page2)
                 }
          }
    Text {
        id: text
        font{
            bold: true
            pointSize: 30
        }
        anchors.top: patent.top
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        anchors.left: parent.left
    }
    Connections {
        target: page2
        onButtonClicked: {
            text.text= buttonId;
            myStackview.pop();
        }
    }
}
