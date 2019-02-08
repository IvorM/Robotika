using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Zadatak2Form
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SerialPort serial=new SerialPort("COM6");
            serial.Open();
            char[] toSend = { 'O' };
            serial.Write(toSend,0,toSend.Length);
            serial.Close();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            SerialPort serial = new SerialPort("COM6");
            serial.Open();
            char[] toSend = { 'F' };
            serial.Write(toSend, 0, toSend.Length);
            serial.Close();
        }
    }
}
