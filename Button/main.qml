import QtQuick 2.6
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

ApplicationWindow {
    id: mainWindow
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ListView{
        anchors.fill: parent
        model: people
        delegate: Rectangle {
            width: parent.width
            height: 30
            RowLayout{
                width: parent.width
                Text{
                    Layout.fillWidth:  true
                    text: name
                }
                Text{
                    Layout.fillWidth: true
                    text: age
                }
                Button{
                    Layout.fillWidth:  true
                    text: "ok"
                }
            }
        }
    }

}
