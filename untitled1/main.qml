import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "textarea Example"


    Item {
        width: 100; height: 100

        Component {
            id: redSquare

            Rectangle {
                color: "red"
                width: 10
                height: 10
            }
        }

        Loader { sourceComponent: redSquare }
        Loader { sourceComponent: redSquare; x: 20 }
    }
}
