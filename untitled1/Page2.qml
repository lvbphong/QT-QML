import QtQuick 2.0
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Page {

    signal buttonClicked(var buttonId)

    ColumnLayout{

        anchors.fill: parent
        spacing: 10
        Button{
            id: button1
            Layout.fillWidth: true
            Layout.fillHeight: true
            text: 'Button 1'
        }
        Button{
            id: button2
            Layout.fillWidth: true
            Layout.fillHeight: true
            text: 'Button 2'
        }


    }
    Connections{
        target: button1
        onClicked: {
            buttonClicked(1)
        }
    }
    Connections{
        target: button2
        onClicked: {
            buttonClicked(2)
        }
    }


}
