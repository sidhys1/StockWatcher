using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace StockApp
{
    public partial class Loader : Form
    {
        
    [DllImport("user32.dll", CharSet = CharSet.Unicode)]
    public static extern int MessageBox(IntPtr hWnd, String text, String caption, uint type);

    
         public Loader()
        {
            InitializeComponent();
        }

        void checkForDLLs() { 
            try {
            } catch {
            MessageBox(new IntPtr(0), "Failed to find required DLLs.", "Error", 0);
            }
        }

        void changeLoadingText(string newTxt) {
            label1.Text = newTxt;
        }

        private void Loader_Load(object sender, EventArgs e)
        {
            changeLoadingText("Checking DLLs");
        }
    }
}

